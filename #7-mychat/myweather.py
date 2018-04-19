# -*- coding: utf-8 -*-
import urllib2, json
import sys

reload(sys)
sys.setdefaultencoding('utf8')
def getweather(city):
    url = 'https://free-api.heweather.com/s6/weather?key=f3ab6320122e4c18823a0d4f68f930fe&location=' + city
    # return city
    req = urllib2.Request(url)
    resp = urllib2.urlopen(req).read()
    # print(resp)

    json_data = json.loads(resp)
    city_data = json_data['HeWeather6'][0]
    basic = city_data['basic']
    now = city_data['now']
    daily_data = city_data['daily_forecast']
    info = u'当前时间：' + daily_data[0]['date'] + '\n'
    info += u'城市：' + basic['cnty'] + '-' + basic['admin_area'] + '-' + basic['location'] + '\n'
    info += u'当前天气：' + '\n'
    info += u'    天气：' + now['cond_txt'] + '\n'
    info += u'    体感温度：' + now['fl'] + u' ℃\n'
    info += u'    温度：' + now['tmp'] + u' ℃\n'
    info += u'    相对湿度：' + now['hum'] + '\n'
    info += u'    风向：' + now['wind_dir'] + '\n'
    info += u'    风力：' + now['wind_sc'] + u' 级\n'
    info += u'    风速：' + now['wind_spd'] + u' 公里/小时\n'
    info += u'    能见度：' + now['vis'] + u' 公里\n'


    return info
