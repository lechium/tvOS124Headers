/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVControlServices-Structs.h>
#import <TVControlServices/TVCSEndpoint.h>

@class NSString;

@interface TVCSPairableEndpoint : TVCSEndpoint {

	NSString* _bonjourServiceName;
	NSString* _pairingPublicKey;

}

@property (nonatomic,copy) NSString * bonjourServiceName;              //@synthesize bonjourServiceName=_bonjourServiceName - In the implementation block
@property (nonatomic,copy) NSString * pairingPublicKey;                //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bonjourServiceName;
-(BOOL)_isEqualToPairableEndpoint:(id)arg1 ;
-(void)_cloneFromPairableEndpoint:(id)arg1 ;
-(NSString *)pairingPublicKey;
-(void)setBonjourServiceName:(NSString *)arg1 ;
-(void)setPairingPublicKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
