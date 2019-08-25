/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding> {

	NSString* _idsIdentifier;
	NSString* _idsFirstRoutableInternetDestination;

}

@property (nonatomic,copy) NSString * idsIdentifier;                                    //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsFirstRoutableInternetDestination;              //@synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)idsFirstRoutableInternetDestination;
-(void)setIdsFirstRoutableInternetDestination:(NSString *)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSString *)idsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
@end

