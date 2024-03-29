/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject {

	NSString* _name;
	NSString* _unitDescription;

}

@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * unitDescription;              //@synthesize unitDescription=_unitDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(void)dump;
-(id)initWithName:(id)arg1 description:(id)arg2 ;
-(NSString *)unitDescription;
-(id)generateDictionary;
-(void)setUnitDescription:(NSString *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
@end

