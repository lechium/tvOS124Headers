/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServerCertificate, NSData;

@interface IDSRegistrationCertificate : NSObject {

	IDSServerCertificate* _backingCertificate;

}

@property (nonatomic,readonly) IDSServerCertificate * backingCertificate;              //@synthesize backingCertificate=_backingCertificate - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithBackingCertificate:(id)arg1 ;
-(IDSServerCertificate *)backingCertificate;
-(NSData *)dataRepresentation;
-(id)description;
@end
