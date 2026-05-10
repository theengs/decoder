export interface DecodedBLE {
  brand?: string;
  model?: string;
  model_id?: string;
  type?: string;
  [key: string]: unknown;
}

export interface PropertyInfo {
  unit?: string;
  name?: string;
  [key: string]: unknown;
}

export interface PropertiesInfo {
  properties: Record<string, PropertyInfo>;
}

export type DecodeInput = string | Record<string, unknown>;

/**
 * Pre-load the WebAssembly module. Optional — the first call to
 * decodeBLE/getProperties/getAttribute will load it on demand. Calling
 * ready() at startup avoids paying that cost on the first hot-path call.
 */
export function ready(): Promise<void>;

/**
 * Decode a BLE advertisement object (or JSON string of one). Returns the
 * decoded device information, or null if no decoder matched.
 */
export function decodeBLE(input: DecodeInput): Promise<DecodedBLE | null>;

/**
 * Look up the property dictionary for a known model_id. Returns null if
 * the model_id is unknown.
 */
export function getProperties(modelId: string): Promise<PropertiesInfo | null>;

/**
 * Look up a single attribute value for a known model_id. Returns null if
 * the model_id or attribute is unknown.
 */
export function getAttribute(modelId: string, attribute: string): Promise<string | null>;
