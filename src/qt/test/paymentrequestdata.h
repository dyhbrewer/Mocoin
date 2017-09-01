// Copyright (c) 2009-2015 The Ebocoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//
// Data for paymentservertests.cpp
//

// Base64/DER-encoded fake certificate authority certificates.
// Convert pem to base64/der with:
// openssl x509 -in cert.pem -inform PEM -outform DER | openssl enc -base64

// Serial Number: 10302349811211485352 (0x8ef94c91b112c0a8)
// Issuer: CN=PaymentRequest Test CA
// Subject: CN=PaymentRequest Test CA
// Not Valid After : Dec  8 16:37:24 2022 GMT
//
const char* caCert1_BASE64 =
"\
MIIB0DCCATmgAwIBAgIJAI75TJGxEsCoMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNV\
BAMTFlBheW1lbnRSZXF1ZXN0IFRlc3QgQ0EwHhcNMTIxMjEwMTYzNzI0WhcNMjIx\
MjA4MTYzNzI0WjAhMR8wHQYDVQQDExZQYXltZW50UmVxdWVzdCBUZXN0IENBMIGf\
MA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCvua59nX9radoqDYyplcns5qdVDTN1\
7tmcGixmMYOYU3UYMU55VSsJs0dWKnMm3COQDY+N63c0XSbRqarBcsLTkaNASuPX\
FCv1VWuEKSyy5xe4zeoDU7CVSzlxtQD9wbZW/s3ISjgaXBpwn6eVmntb0JwYxxPc\
M1u/hrMD8BDbSQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUA\
A4GBADSaRgK5xe47XxycXBhHhr0Wgl4pAsFsufqA9aB9r8KNEHJ0yUvvbD/jaJJM\
RtQcf0AJ9olzUMY4syehxbzUJP6aeXhZEYiMvdvcv9D55clq6+WLLlNT3jBgAaVn\
p3waRjPD4bUX3nv+ojz5s4puw7Qq5QUZlhGsMzPvwDGCmZkL\
";

// Serial Number: f0:da:97:e4:38:d7:64:16
// Issuer: CN=PaymentRequest Test CA
// Subject: CN=PaymentRequest Test CA
// Not Valid After : Jan  8 18:21:06 2025 GMT
//
const char* caCert2_BASE64 =
"\
MIIC1TCCAb2gAwIBAgIJAPDal+Q412QWMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNV\
BAMMFlBheW1lbnRSZXF1ZXN0IFRlc3QgQ0EwHhcNMTUwMTExMTgyMTA2WhcNMjUw\
MTA4MTgyMTA2WjAhMR8wHQYDVQQDDBZQYXltZW50UmVxdWVzdCBUZXN0IENBMIIB\
IjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA1S9wVLfTplJuT/1OaaBgl/Mb\
I392v8S9kHbzYz7B4OTMslaO7piz0v3SO3TKMh0dswjiRdHrIgpO7XdIUQiU/ugg\
xDw0kuNehfz1ycaGedlFFtFHTNXqLyIUF3dlwHhQwaomM6RXoJmxLny5BhYHEcmk\
yWwr3Cdjd9gAZpblugVJB9C1e40uyL8ao4PHdLzOqO27iSe6riP8SwwisJZEbMaz\
AZpgNEEMbIXPJEFvm5HTRXSMtQCOTSZYMFF0M2yrtmlECnz7hWP19b9bcoDzZQB4\
ylIsFG/7q2jV7MC/e2STZv+niJiHL08RUdoFpAgzaxMgqj63C7B55HgNDNHJYQID\
AQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQBGejPxLxj9\
+crv6gUeEBMZPiUx7pUgcI22Wm5yymP96B4fwI3Y0DBehq20d76vbWGPN17Z6pH3\
ge7PVY1SYqXtS6hXTo4olCm/BZADli+2Bs2xCiaa+Ltve4ufVej+bKJXN/YnrhvO\
Kq+klQkuuHywU+GJV/NQeBqToIrSOBgi477NgLFCCCmmx2QWsxHoCFGfuRCBVseT\
z2k/tMuALCDXGeZBRPTsGHu1y4cj84swAeoDK5QSQcI+Ub7GKc+zkoj02sdDLiMo\
3wokYPcIy47oclhmb4xubHc+y7nF610yZBoC/zgbhbawnZ65hDDWkdQ/SVAnWZD7\
9PFfmNnYPTQH\
";

//
// This payment request validates directly against the
// caCert1 certificate authority.
//
const char* paymentrequest1_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrxAwruAzCCAeowggFToAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAxMWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xMjEyMTAx\
NjM3MjRaFw0yMjEyMDgxNjM3MjRaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5v\
cmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVzdCBUZXN0IE1lcmNoYW50MIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDHkMy8W1u6HsWlSqdWTmMKf54gICxNfxbY\
+rcMtAftr62hCYx2d2QiSRd1pCUzmo12IiSX3WxSHwaTnT3MFD6jRx6+zM6XdGar\
I2zpYle11ANzu4gAthN17uRQHV2O5QxVtzNaMdKeJLXT2L9tfEdyL++9ZUqoQmdA\
YG9ix330hQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GB\
AIkyO99KC68bi9PFRyQQ7nvn5GlQEb3Ca1bRG5+AKN9N5vc8rZ9G2hejtM8wEXni\
eGBP+chVMsbTPEHKLrwREn7IvcyCcbAStaklPC3w0B/2idQSHskb6P3X13OR2bTH\
a2+6wuhsOZRUrVNr24rM95DKx/eCC6JN1VW+qRPU6fqzIjQSHwiw2wYSGXapFJVg\
igPI+6XpExtNLO/i1WFV8ZmoiKwYsuHFiwUqC1VuaXRUZXN0T25lKoABS0j59iMU\
Uc9MdIfwsO1BskIET0eJSGNZ7eXb9N62u+qf831PMpEHkmlGpk8rHy92nPcgua/U\
Yt8oZMn3QaTZ5A6HjJbc3A73eLylp1a0SwCl+KDMEvDQhqMn1jAVu2v92AH3uB7n\
SiWVbw0tX/68iSQEGGfh9n6ee/8Myb3ICdw=\
";

//
// Signed, but expired, merchant cert in the request
//
const char* paymentrequest2_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrsAwrpAzCCAeUwggFOoAMCAQICAQMwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAxMWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xMzAyMjMy\
MTI2NDNaFw0xMzAyMjQyMTI2NDNaMD4xHDAaBgNVBAMME2V4cGlyZWRtZXJjaGFu\
dC5vcmcxHjAcBgNVBAoMFUV4cGlyZWQgVGVzdCBNZXJjaGFudDCBnzANBgkqhkiG\
9w0BAQEFAAOBjQAwgYkCgYEAx5DMvFtbuh7FpUqnVk5jCn+eICAsTX8W2Pq3DLQH\
7a+toQmMdndkIkkXdaQlM5qNdiIkl91sUh8Gk509zBQ+o0cevszOl3RmqyNs6WJX\
tdQDc7uIALYTde7kUB1djuUMVbczWjHSniS109i/bXxHci/vvWVKqEJnQGBvYsd9\
9IUCAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOBgQAaU137\
j53rvSjlmYZpZ4RWTP7EdD6fl5ZxBeXHytN6DQL33H0eD7OFHt+ofc7E6D7keubl\
UfCu+jOvt/MvvPUmtCI9yXZ0dNC4sjyETv+wQpxO0UNZwOM4uegdCzlo6Bi3pD4/\
KKLdMkWuUfuPBmoammny74lZaOVr5deKXztTuCI0Eh8IsNsGEhl2qRSVYIoDyPul\
6RMbTSzv4tVhVfGZqIisGLLhxYsFKgtVbml0VGVzdFR3byqAAXHuo4nZEPniLpkd\
y30TkwBxVgprWJ18a9z/7Py35Qss/JMbOXbnBhJtmJCdIowHRI0aa+zqt3KKKAXi\
mm+V4seMgxTcxMS+eDDkiTcB/RtWWSyRcS2ANjFeY0T4SLMwiCL9qWPi03hr8j96\
tejrSPOBNSJ3Mi/q5u2Yl4gJZY2b\
";

//
// 10-long certificate chain, all intermediates valid
//
const char* paymentrequest3_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1Nhq8JAr/AzCCAfswggFkoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwPzEUMBIGA1UEAwwLdGVzdGNhOC5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVx\
dWVzdCBJbnRlcm1lZGlhdGUgODAeFw0xMzAyMjMyMjQyMzFaFw0yMzAyMjEyMjQy\
MzFaMDYxGjAYBgNVBAMMEXRlc3RtZXJjaGFudDgub3JnMRgwFgYDVQQKDA9UZXN0\
IE1lcmNoYW50IDgwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMMCHA3hiHbS\
TKZ5K9jHRwE8NxkGp3IOx56PDB2diNkldG8XweTcRq7bBm7pdiBt4IVggtfs+6hE\
hDYIOecyoAnVzPFTdvQ7KQdQ/fD9YLe6lk+o0edOqutPMyrxLFjSluXxEQyk7fdt\
URloMMYfp3p1/hFCboA1rAsQ2RW38hR5AgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8w\
DQYJKoZIhvcNAQELBQADgYEAPsdFatnc2RJSpvZsw+nCiPVsllycw5ELglq9vfJz\
nJJucRxgzmqI2iuas1ugwbXn0BEIRLK7vMF/qBzQR6M/nTxttah+KEu+okjps9vJ\
cIyhfTyGPC5xkHaHZ7sG+UHOFhPw0/kXn0x+pbVgBZ5315axqcp1R+DTSj/whMAr\
n0AKiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMM\
C3Rlc3RjYTcub3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRp\
YXRlIDcwHhcNMTMwMjIzMjI0MjMxWhcNMjMwMjIxMjI0MjMxWjA/MRQwEgYDVQQD\
DAt0ZXN0Y2E4Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVk\
aWF0ZSA4MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDexUFfxb1sThvabp7u\
dZz59ciThGmmAW0nP4tjrgEACgvWIInr2dZpTHbiQNF34ycsk0le1JD93D7Qb8rd\
25OrpaO8XS2Li2zjR9cleixXjSLwV/zv8zJ8yPl/27XL++PDTKBXVpJ8/Syp+9Ty\
plV1BqDhqtIHb/QSHEkTQXjeYQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqG\
SIb3DQEBCwUAA4GBACMooQVbkbIZ2DaPwHDc4ULwguG3VI2Kzj50UdExmHtzm2S4\
MQei+n+HEPjtJAx5OY520+10nfuP+12H2DRLQmWmdvDpeQ/Cv0yavlw4ZRejRFo7\
KS83C0wo5rd+qTvvOmAN4UTArWkzYcEUulPdiXnRamb0WQHTeVdIbHVkMormCogE\
MIICBDCCAW2gAwIBAgIBAjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0\
Y2E2Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA2\
MB4XDTEzMDIyMzIyNDIzMVoXDTIzMDIyMTIyNDIzMVowPzEUMBIGA1UEAwwLdGVz\
dGNhNy5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUg\
NzCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAtjBRazrkebXAhXsbjimrMIRm\
W/f9SwAHwXfc042keNtl0t2z6XE6UPcR2v/KrssXuCZgodeYxz6IM6lWosCM1xot\
C3ChKKFBfVO30reuKBRUxXfKAFqxaG0YOAEzdZkkY9AGhqWloeSmgxpIfhInU0EF\
JjCwrJ6IkijBatGoAAECAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0B\
AQsFAAOBgQDBRTi1MolmOA0niHYX0A2lN5QWHkCfX0A7GwyoMA3dvM45m/NYd4WB\
X+HwfnfYcI6X9jOgNo5OWmc4GGsld0HlxwMYEKISBS9PbSHPBrb3TBOlw5ztQpXZ\
91+bOhLux52Fr03sK7v9qExmBM12M8UR2ltpzAMiUgLLMHyPfiWkvQqIBDCCAgQw\
ggFtoAMCAQICAQIwDQYJKoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhNS5v\
cmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNTAeFw0x\
MzAyMjMyMjQyMzBaFw0yMzAyMjEyMjQyMzBaMD8xFDASBgNVBAMMC3Rlc3RjYTYu\
b3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDYwgZ8w\
DQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBANJSH3xivX1t9olIdHsznI1aE9SD7t9i\
SZJsIB0otoETHZRVv9M9LvyzBNK98ZV+kTOlST7PJgC0d9BQM9sgYApSRq5oqKDM\
9FXbOm/yaReAbU3mkFNFw5roTlJ5ThEy0yOGT/DS0YBRaGIvRPRj2DiqDVdCZZ+w\
4jo1IYHkZt4FAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQAD\
gYEATm6+J1OmbrothO60xALKonWMBKr6hudb4amkFBqKbA9wMeM3jl+I/yKfz/Uf\
xWuJ071IhiNv6Gxx5YwNvhUe1xMhUqHv0gpyK1Z47bD+kYS2se5sWNPNo3Y9qZDG\
IXiGQxwHmrzaFk79Uy1xsmvsEz42w6hr25Yaw7HkIgrFveoKiAQwggIEMIIBbaAD\
AgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTQub3JnMScw\
JQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDQwHhcNMTMwMjIz\
MjI0MjMwWhcNMjMwMjIxMjI0MjMwWjA/MRQwEgYDVQQDDAt0ZXN0Y2E1Lm9yZzEn\
MCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA1MIGfMA0GCSqG\
SIb3DQEBAQUAA4GNADCBiQKBgQC7vVUFpxHzz2Tr/xij3k58s8d/BPA0R6D5RXTV\
vmhAzc1Zuin4zUKRFs/aCj/0yED8Wu/COfNGF4tVlRNMdl9EcFsxa8XGEL4eAZa+\
H/rOHH+7/1EINrrVWhZlUecyhilN8jmCZmqEM3ecuD0NAViqyMrgmaiFmsLoQZpE\
GepDUQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBAEdJ\
Ss8jWiooja3WZzHXeF95QkBJNjIlpDLGcpl4opOYLSuEl9Uxp//LaQQiXuzpj4/I\
pkWGQmMy5HOyH1lqDyiMgXpcG8PE0jEQAoEUGZ0QEqB1mZ6BCrYvmUuf/5aSVd8Y\
6lKMR3WzFDYU9Zy0nzuHB/3nvp6MeDRQeRMtYvz4CogEMIICBDCCAW2gAwIBAgIB\
AjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0Y2EzLm9yZzEnMCUGA1UE\
CgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAzMB4XDTEzMDIyMzIyNDIy\
OVoXDTIzMDIyMTIyNDIyOVowPzEUMBIGA1UEAwwLdGVzdGNhNC5vcmcxJzAlBgNV\
BAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNDCBnzANBgkqhkiG9w0B\
AQEFAAOBjQAwgYkCgYEAxYYo3w2UXiYg6O8b4QgwN/vgreTkiW122Ep/z2TiDrhV\
MhfOOiKdwYESPflfnXnVaQQzCGexYTQqsvqvzHSyna5hL0zPTRJxSKmTVrXRsWtp\
dCRhjxCGipS3tlQBDi7vb+7SNRIBK4dBjjGzALNk7gMCpy+yM8f6I043jTlmGb0C\
AwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOBgQDU+IQxt3Oh\
KqaUYWC23+cB2gekvWqwMBnrCNrX/Dp+kjoJKUoR2Fs3qw53raHES4SIhpGT9l9l\
rppNQgFe/JMHeYqOZMZO+6kuU0olJanBJ14tPIc7zlMTQ9OfmZ6v07IpyFbsQDtR\
hpe80DpuvSFPfJ4fh0WrQf6kn3KDVpGDnAqIBDCCAgQwggFtoAMCAQICAQIwDQYJ\
KoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhMi5vcmcxJzAlBgNVBAoMHlBh\
eW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMjAeFw0xMzAyMjMyMjQyMjlaFw0y\
MzAyMjEyMjQyMjlaMD8xFDASBgNVBAMMC3Rlc3RjYTMub3JnMScwJQYDVQQKDB5Q\
YXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDMwgZ8wDQYJKoZIhvcNAQEBBQAD\
gY0AMIGJAoGBANzgVP99Qg98e6NsKEz1v5KqRB7NTBRRsYnBvb/TSWipvMQaCYuE\
yk1xG57x++QuASKeR3QHRQJOoAhQaj9JLUhSSv9GQ5PrFLLsOFv7L1tpzXHh2dOB\
IW92X2yFRW2s39q+Q21yvN+N8uoKdqXhzRA+dDoXh3cavaVeHX1G+IrlAgMBAAGj\
EDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQADgYEASTwg84cX+1UhOG9s\
ejFV3m34QuI1hPZ+qhqVJlRYUtego8Wng1BburDSwqVAv4ch2wi3c2s4e8J7AXyL\
tzSbSQG4RN0oZi0mR8EtTTN+Mix/hBIk79dMZg85+I29uFA6Zj2d9oAhQv2qkHhc\
6tcaheNvkQRlCyH68k3iF1Fqf+4KiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3\
DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTEub3JnMScwJQYDVQQKDB5QYXltZW50\
IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDEwHhcNMTMwMjIzMjI0MjI5WhcNMjMwMjIx\
MjI0MjI5WjA/MRQwEgYDVQQDDAt0ZXN0Y2EyLm9yZzEnMCUGA1UECgweUGF5bWVu\
dCBSZXF1ZXN0IEludGVybWVkaWF0ZSAyMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCB\
iQKBgQDaV8zhfyQuSf/f+fauMfgs3g/RnWy9yxxUkvQneQQPH3uZzCyk3A6q72ip\
TtwNqiibG9455L9A7SaUjGtnpUz0NKT/VWUdqbfCl1PqXjEZbDobbAQ5hxLGOTyL\
RQhLIcgeq2/BnmeCqHsC4md04nUp+nBo1HwKyygvK+9sMbCp/wIDAQABoxAwDjAM\
BgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBACvYyE+PPmWFkbjyRu9LAt8D\
crtyYYLRClKSg6tVvutwukLG2l//kDOohYkJtgTqr6LnCIIIwYdXN+4wxugmw4cn\
PIZmP6kovxjhhVM95okilor1zniTAo3RN7JDIfTGNgxLdGu1btt7DOFL4zTbeSJM\
b8M1JpPftehH+x/VLyuUCuoDMIIB5jCCAU+gAwIBAgIBBTANBgkqhkiG9w0BAQsF\
ADAhMR8wHQYDVQQDExZQYXltZW50UmVxdWVzdCBUZXN0IENBMB4XDTEzMDIyMzIy\
NDIyOFoXDTIzMDIyMTIyNDIyOFowPzEUMBIGA1UEAwwLdGVzdGNhMS5vcmcxJzAl\
BgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMTCBnzANBgkqhkiG\
9w0BAQEFAAOBjQAwgYkCgYEAo5Vy9H3nA/OOkF5Ap89yfVNSiTay/LYCaB0eALpc\
U690U75O9Q3w2M+2AN8wpbbHsJHZMIjEeBRoQfjlYXW1ucQTxWKyT+liu0D25mGX\
X27CBXBd4iXTxVII/iX+u3lcjORjoHOBy7QgeIDIIS9y0vYu8eArpjh7m4thrVgI\
RtMCAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOBgQB9LKcV\
JK9sjASNzpQlpUp7nCiw5FSjVY+XMRIKK/kavzlKjZ+InsmmyRVGjDoZi9GrqG9P\
VHgLBxi2VtVjmokZoNPqao3OfhqORAubC+JR/JLepM7aDaxDdTHVhSUk4lgNAvi2\
6dGY7nZMsnHlPQ2tPp/HvRRiMq1oDjlylc8VTCI2Eh8IsNsGEhl2qRSVYIoDyPul\
6RMbTSzv4tVhVfGZqIisGLLhxYsFKg1Vbml0VGVzdFRocmVlKoABn2HTsUQtMNI4\
yNvkfkFNka3pRvTUTydJrvyfmEeLzImfM1BWddZjnywku9RToNFZZNgow5QnljmF\
chhR/aHOuEMTxmc12K4rNlgYtHCsxLP9zd+6u0cva3TucZ6EzS8PKEib/+r12/52\
664NuWA9WtsK7QCFrK2K95PnVCRmWl0=\
";

//
// Long certificate chain, with an expired certificate in the middle
//
const char* paymentrequest4_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhqeJAr/AzCCAfswggFkoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwPzEUMBIGA1UEAwwLdGVzdGNhOC5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVx\
dWVzdCBJbnRlcm1lZGlhdGUgODAeFw0xMzAyMjMyMjQyMzFaFw0yMzAyMjEyMjQy\
MzFaMDYxGjAYBgNVBAMMEXRlc3RtZXJjaGFudDgub3JnMRgwFgYDVQQKDA9UZXN0\
IE1lcmNoYW50IDgwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMMCHA3hiHbS\
TKZ5K9jHRwE8NxkGp3IOx56PDB2diNkldG8XweTcRq7bBm7pdiBt4IVggtfs+6hE\
hDYIOecyoAnVzPFTdvQ7KQdQ/fD9YLe6lk+o0edOqutPMyrxLFjSluXxEQyk7fdt\
URloMMYfp3p1/hFCboA1rAsQ2RW38hR5AgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8w\
DQYJKoZIhvcNAQELBQADgYEAPsdFatnc2RJSpvZsw+nCiPVsllycw5ELglq9vfJz\
nJJucRxgzmqI2iuas1ugwbXn0BEIRLK7vMF/qBzQR6M/nTxttah+KEu+okjps9vJ\
cIyhfTyGPC5xkHaHZ7sG+UHOFhPw0/kXn0x+pbVgBZ5315axqcp1R+DTSj/whMAr\
n0AKiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMM\
C3Rlc3RjYTcub3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRp\
YXRlIDcwHhcNMTMwMjIzMjI0MjMxWhcNMjMwMjIxMjI0MjMxWjA/MRQwEgYDVQQD\
DAt0ZXN0Y2E4Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVk\
aWF0ZSA4MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDexUFfxb1sThvabp7u\
dZz59ciThGmmAW0nP4tjrgEACgvWIInr2dZpTHbiQNF34ycsk0le1JD93D7Qb8rd\
25OrpaO8XS2Li2zjR9cleixXjSLwV/zv8zJ8yPl/27XL++PDTKBXVpJ8/Syp+9Ty\
plV1BqDhqtIHb/QSHEkTQXjeYQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqG\
SIb3DQEBCwUAA4GBACMooQVbkbIZ2DaPwHDc4ULwguG3VI2Kzj50UdExmHtzm2S4\
MQei+n+HEPjtJAx5OY520+10nfuP+12H2DRLQmWmdvDpeQ/Cv0yavlw4ZRejRFo7\
KS83C0wo5rd+qTvvOmAN4UTArWkzYcEUulPdiXnRamb0WQHTeVdIbHVkMormCogE\
MIICBDCCAW2gAwIBAgIBAjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0\
Y2E2Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA2\
MB4XDTEzMDIyMzIyNDIzMVoXDTIzMDIyMTIyNDIzMVowPzEUMBIGA1UEAwwLdGVz\
dGNhNy5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUg\
NzCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAtjBRazrkebXAhXsbjimrMIRm\
W/f9SwAHwXfc042keNtl0t2z6XE6UPcR2v/KrssXuCZgodeYxz6IM6lWosCM1xot\
C3ChKKFBfVO30reuKBRUxXfKAFqxaG0YOAEzdZkkY9AGhqWloeSmgxpIfhInU0EF\
JjCwrJ6IkijBatGoAAECAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0B\
AQsFAAOBgQDBRTi1MolmOA0niHYX0A2lN5QWHkCfX0A7GwyoMA3dvM45m/NYd4WB\
X+HwfnfYcI6X9jOgNo5OWmc4GGsld0HlxwMYEKISBS9PbSHPBrb3TBOlw5ztQpXZ\
91+bOhLux52Fr03sK7v9qExmBM12M8UR2ltpzAMiUgLLMHyPfiWkvQqIBDCCAgQw\
ggFtoAMCAQICAQIwDQYJKoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhNS5v\
cmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNTAeFw0x\
MzAyMjMyMjQyMzBaFw0yMzAyMjEyMjQyMzBaMD8xFDASBgNVBAMMC3Rlc3RjYTYu\
b3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDYwgZ8w\
DQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBANJSH3xivX1t9olIdHsznI1aE9SD7t9i\
SZJsIB0otoETHZRVv9M9LvyzBNK98ZV+kTOlST7PJgC0d9BQM9sgYApSRq5oqKDM\
9FXbOm/yaReAbU3mkFNFw5roTlJ5ThEy0yOGT/DS0YBRaGIvRPRj2DiqDVdCZZ+w\
4jo1IYHkZt4FAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQAD\
gYEATm6+J1OmbrothO60xALKonWMBKr6hudb4amkFBqKbA9wMeM3jl+I/yKfz/Uf\
xWuJ071IhiNv6Gxx5YwNvhUe1xMhUqHv0gpyK1Z47bD+kYS2se5sWNPNo3Y9qZDG\
IXiGQxwHmrzaFk79Uy1xsmvsEz42w6hr25Yaw7HkIgrFveoK6gMwggHmMIIBT6AD\
AgECAgEGMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNVBAMTFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwHhcNMTMwMjIzMjI1OTUxWhcNMTMwMjI0MjI1OTUxWjA/MRQwEgYD\
VQQDDAt0ZXN0Y2E1Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVy\
bWVkaWF0ZSA1MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC7vVUFpxHzz2Tr\
/xij3k58s8d/BPA0R6D5RXTVvmhAzc1Zuin4zUKRFs/aCj/0yED8Wu/COfNGF4tV\
lRNMdl9EcFsxa8XGEL4eAZa+H/rOHH+7/1EINrrVWhZlUecyhilN8jmCZmqEM3ec\
uD0NAViqyMrgmaiFmsLoQZpEGepDUQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0G\
CSqGSIb3DQEBCwUAA4GBAEmcUEnhua/oiXy1fwScLgMqt+jk9mHRpE6SVsIop23Q\
CY2JfpG6RxhMMzzzhGklEGN6cxG0HCi6B3HJx6PYrFEfTB0rW4K6m0Tvx3WpS9mN\
uoEuJHLy18ausI/sYAPDHCL+SfBVcqorpaIG2sSpZouRBjRHAyqFAYlwlW87uq5n\
CogEMIICBDCCAW2gAwIBAgIBAjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0\
ZXN0Y2EzLm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0\
ZSAzMB4XDTEzMDIyMzIyNDIyOVoXDTIzMDIyMTIyNDIyOVowPzEUMBIGA1UEAwwL\
dGVzdGNhNC5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlh\
dGUgNDCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAxYYo3w2UXiYg6O8b4Qgw\
N/vgreTkiW122Ep/z2TiDrhVMhfOOiKdwYESPflfnXnVaQQzCGexYTQqsvqvzHSy\
na5hL0zPTRJxSKmTVrXRsWtpdCRhjxCGipS3tlQBDi7vb+7SNRIBK4dBjjGzALNk\
7gMCpy+yM8f6I043jTlmGb0CAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG\
9w0BAQsFAAOBgQDU+IQxt3OhKqaUYWC23+cB2gekvWqwMBnrCNrX/Dp+kjoJKUoR\
2Fs3qw53raHES4SIhpGT9l9lrppNQgFe/JMHeYqOZMZO+6kuU0olJanBJ14tPIc7\
zlMTQ9OfmZ6v07IpyFbsQDtRhpe80DpuvSFPfJ4fh0WrQf6kn3KDVpGDnAqIBDCC\
AgQwggFtoAMCAQICAQIwDQYJKoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNh\
Mi5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMjAe\
Fw0xMzAyMjMyMjQyMjlaFw0yMzAyMjEyMjQyMjlaMD8xFDASBgNVBAMMC3Rlc3Rj\
YTMub3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDMw\
gZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBANzgVP99Qg98e6NsKEz1v5KqRB7N\
TBRRsYnBvb/TSWipvMQaCYuEyk1xG57x++QuASKeR3QHRQJOoAhQaj9JLUhSSv9G\
Q5PrFLLsOFv7L1tpzXHh2dOBIW92X2yFRW2s39q+Q21yvN+N8uoKdqXhzRA+dDoX\
h3cavaVeHX1G+IrlAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEL\
BQADgYEASTwg84cX+1UhOG9sejFV3m34QuI1hPZ+qhqVJlRYUtego8Wng1BburDS\
wqVAv4ch2wi3c2s4e8J7AXyLtzSbSQG4RN0oZi0mR8EtTTN+Mix/hBIk79dMZg85\
+I29uFA6Zj2d9oAhQv2qkHhc6tcaheNvkQRlCyH68k3iF1Fqf+4KiAQwggIEMIIB\
baADAgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTEub3Jn\
MScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDEwHhcNMTMw\
MjIzMjI0MjI5WhcNMjMwMjIxMjI0MjI5WjA/MRQwEgYDVQQDDAt0ZXN0Y2EyLm9y\
ZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAyMIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDaV8zhfyQuSf/f+fauMfgs3g/RnWy9yxxU\
kvQneQQPH3uZzCyk3A6q72ipTtwNqiibG9455L9A7SaUjGtnpUz0NKT/VWUdqbfC\
l1PqXjEZbDobbAQ5hxLGOTyLRQhLIcgeq2/BnmeCqHsC4md04nUp+nBo1HwKyygv\
K+9sMbCp/wIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GB\
ACvYyE+PPmWFkbjyRu9LAt8DcrtyYYLRClKSg6tVvutwukLG2l//kDOohYkJtgTq\
r6LnCIIIwYdXN+4wxugmw4cnPIZmP6kovxjhhVM95okilor1zniTAo3RN7JDIfTG\
NgxLdGu1btt7DOFL4zTbeSJMb8M1JpPftehH+x/VLyuUCuoDMIIB5jCCAU+gAwIB\
AgIBBTANBgkqhkiG9w0BAQsFADAhMR8wHQYDVQQDExZQYXltZW50UmVxdWVzdCBU\
ZXN0IENBMB4XDTEzMDIyMzIyNDIyOFoXDTIzMDIyMTIyNDIyOFowPzEUMBIGA1UE\
AwwLdGVzdGNhMS5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1l\
ZGlhdGUgMTCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAo5Vy9H3nA/OOkF5A\
p89yfVNSiTay/LYCaB0eALpcU690U75O9Q3w2M+2AN8wpbbHsJHZMIjEeBRoQfjl\
YXW1ucQTxWKyT+liu0D25mGXX27CBXBd4iXTxVII/iX+u3lcjORjoHOBy7QgeIDI\
IS9y0vYu8eArpjh7m4thrVgIRtMCAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkq\
hkiG9w0BAQsFAAOBgQB9LKcVJK9sjASNzpQlpUp7nCiw5FSjVY+XMRIKK/kavzlK\
jZ+InsmmyRVGjDoZi9GrqG9PVHgLBxi2VtVjmokZoNPqao3OfhqORAubC+JR/JLe\
pM7aDaxDdTHVhSUk4lgNAvi26dGY7nZMsnHlPQ2tPp/HvRRiMq1oDjlylc8VTCI1\
Eh8IsNsGEhl2qRSVYIoDyPul6RMbTSzv4tVhVfGZqIisGLLhxYsFKgxVbml0VGVz\
dEZvdXIqgAEBE1PP93Tkpif35F+dYmXn9kLA/1djcPjCs2o2rwRMM4Uk356O5dgu\
HXQjsfdR58qZQS9CS5DAtRUf0R8+43/wijO/hb49VNaNXmY+/cPHMkahP2aV3tZi\
FAyZblLik9A7ZvF+UsjeFQiHB5wzWQvbqk5wQ4yabHIXoYv/E0q+eQ==\
";

//
// Validly signed, but by a CA not in our root CA list
//
const char* paymentrequest5_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrxAwruAzCCAeowggFToAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAxMWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xMzA0MTkx\
NzIwMDZaFw0yMzA0MTcxNzIwMDZaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5v\
cmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVzdCBUZXN0IE1lcmNoYW50MIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDhV6Yn47aEEmbl50YLvXoqGEJA51I/40wr\
Z6VQGdXYaRqYktagrWDlgYY9h0JQ1bQhm8HgW7ju0R4NaDTXUqxg4HjprF0z3Mfm\
/6mmebkLOOptfkVD7ceAteNI7cyuqWGIAZA7D9mV97mXoCAtTlBUycvkmoiClCCS\
h0EpF/UTaQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GB\
AGIRwW7I0QvLga+RnJoJSZNZQbtu4rQW3xmoz8WfZMBYXX3QBYg5ftycbdK+/IbP\
qozfjGW2AS6DNArvpveSPDTK9+GJBNo1paiNtVqwXkC3Ddscv5AIms1eZGiIOQNC\
mUvdLkpoXo48WAer3EGsZ3B15GyNEELc0q9W5yUebba1IjUSHwiw2wYSGXapFJVg\
igPI+6XpExtNLO/i1WFV8ZmoiKwYuPvFiwUqDFVuaXRUZXN0Rml2ZSqAAXdsMgdG\
ssymvca1S/1KeM3n8Ydi2fi1JUzAAr59xPvNJRUeqCLP9upHn5z7br3P12Oz9A20\
5/4wL4ClPRPVnOHgij0bEg+y0tGESqmF1rfOfXDszlo2U92wCxS07kq79YAZJ1Zo\
XYh860/Q4wvc7lfiTe+dXBzPKAKhMy91yETY\
";

//
// Contains a testnet paytoaddress, so payment request network doesn't match client network
//
const char* paymentrequest1_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iPQoEdGVzdBIhCIDWwowE\
Ehl2qRQErGqUUwSsaMpDvWIaGnJGNQqi8oisGNeMy6UFKgxKdXN0IFRlc3Rpbmcq\
gAFwThsozZxkZxzCn4R8WxNiLFV6m0ye9fEtSbolfaW+EjBMpO03lr/dwNnrclhg\
ew+A05xfZztrAt16XKEY7qKJ/eY2nLd0fVAIu/nIt+7/VYVXT83zLrWc150aRS7W\
AdJbL3JOJLs6Eyp5zrPbfI8faRttFAdONKDrJgIpuW1E3g==\
";

//
// Expired payment request (expires is set to 1 = 1970-01-01 00:00:01)
//
const char* paymentrequest2_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iQgoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYiNLUpQUgASoQVGVzdGluZyB0ZXN0\
bmV0ISqAATXq9A5nmJgtmee/bQTeHeif4w1YYFPBlKghwx6qbVgXTWnwBJtOQhhV\
sZdzbTl95ENR7/Y7VJupW9kDWobCK7zUUhLAzUlwmLlcx6itHw8LTUF5HK+AwsZm\
Zs85lISGvOS0NZW/ENa6l+oQRnL87oqVZr/EDGiuqjz6T0ThQi0l\
";

//
// Unexpired payment request (expires is set to 0x7FFFFFFFFFFFFFFF = max. int64_t)
//
const char* paymentrequest3_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iSgoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYyNfZpQUg//////////9/KhBUZXN0\
aW5nIHRlc3RuZXQhKoABNwi8WnMW4aMvbmvorTiiWJLFhofLFnsoWCJnj3rWLnLh\
n3w6q/fZ26p50ERL/noxdTUfeFsKnlECkUu/fOcOrqyYDiwvxI0SZ034DleVyFU1\
Z3T+X0zcL8oe7bX01Yf+s2V+5JXQXarKnKBrZCGgv2ARjFNSZe7E7vGg5K4Q6Q8=\
";

//
// Unexpired payment request (expires is set to 0x8000000000000000 > max. int64_t, allowed uint64)
//
const char* paymentrequest4_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iSwoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYt+HZpQUggICAgICAgICAASoQVGVz\
dGluZyB0ZXN0bmV0ISqAAXSQG8+GFA18VaKarlYrOz293rNMIub0swKGcQm8jAGX\
HSLaRgHfUDeEPr4hydy4dtfu59KNwe2xsHOHu/SpO4L8SrA4Dm9A7SlNBVWdcLbw\
d2hj739GDLz0b5KuJ2SG6VknMRQM976w/m2qlq0ccVGaaZ2zMIGfpzL3p6adwx/5\
";

//
// Payment request with amount overflow (amount is set to 21000001 BTC)
//
const char* paymentrequest5_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iTAoEdGVzdBIkCIDC9P+F\
vt0DEhl2qRQErGqUUwSsaMpDvWIaGnJGNQqi8oisGLzcrKYFKhhUZXN0aW5nIGFt\
b3VudCBvdmVyZmxvdyEqgAG8S7WEDUC6tCL6q2CTBjop/AitgEy31RL9IqYruytR\
iEBFUrBDJZU+UEezGwr7/zoECjo5ZY3PmtZcM2sILNjyweJF6XVzGqTxUw6pN6sW\
XR2T3Gy2LzRvhVA25QgGqpz0/juS2BtmNbsZPkN9gMMwKimgzc+PuCzmEKwPK9cQ\
YQ==\
";
