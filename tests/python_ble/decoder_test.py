import asyncio
import json

from TheengsDecoder import decodeBLE as dble

from unittest import TestCase


class TestScanAndDecode(TestCase):
    def test_th05f(self):
        data = {"servicedatauuid": "fcd2", "servicedata": "4000720154022e0a03071d0c190b", "name": "TH05F-C451CC", "id": "38:1F:8D:C4:51:CC", "rssi": -79}
        parsed = json.loads(dble(json.dumps(data)))
        self.assertEqual(parsed.get("model_id"), "TH05F")
        self.assertEqual(data.get("servicedata"), parsed.get("servicedata"))
        self.assertEqual(parsed.get('tempc'), 26.06)
        self.assertEqual(parsed.get('tempf'), 78.908)
        self.assertEqual(parsed.get('hum'),   74.31)
        self.assertEqual(parsed.get('batt'),  84)
        self.assertEqual(parsed.get('volt'),  2.841)
