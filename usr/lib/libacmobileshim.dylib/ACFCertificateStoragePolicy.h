/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACFCertificateStoragePolicy <NSObject>
@required
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2;

@end
