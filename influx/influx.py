from datetime import datetime

from influxdb_client import InfluxDBClient , Point , WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

bucket_name="bucket"
token="HSfHGD2Wskieny0BTGqkjjFBemp8lEilQDDWL354fvwGXSN84zqLg1VFdAVgF0HPwm83uESuWUSo3xTpFx6Tjg=="
org = "mhmdrzalizdh"
url = "http://localhost:8086"

with InfluxDBClient(url,token=token,org=org) as client:
    write_api = client.write_api(write_options=SYNCHRONOUS)

    data="mem,host=host1 used_percent=108.43234543"
    write_api.write(bucket=bucket_name,org=org,record=data)