from datetime import datetime

from influxdb_client import InfluxDBClient , Point , WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

# bucket_name="bucket"
token="HSfHGD2Wskieny0BTGqkjjFBemp8lEilQDDWL354fvwGXSN84zqLg1VFdAVgF0HPwm83uESuWUSo3xTpFx6Tjg=="
org = "mhmdrzalizdh"
url = "http://localhost:8086"

write_client = InfluxDBClient(url=url, token=token, org=org)