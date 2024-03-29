/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface HFTVInputControlItemValue : NSObject <NSCopying> {

	BOOL _isHidden;
	BOOL _isSelected;
	NSNumber* _identifier;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isHidden;                           //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
+(id)valueWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(id)initWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(BOOL)isConfigured;
-(NSNumber *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(BOOL)isSelected;
@end

