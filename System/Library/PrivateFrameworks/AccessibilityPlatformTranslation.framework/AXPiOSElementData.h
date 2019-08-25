/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXPiOSElementData : NSObject <NSCopying> {

	int _pid;
	SCD_Struct_AX1 _uid;

}

@property (assign,nonatomic) SCD_Struct_AX1 uid;              //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) int pid;                         //@synthesize pid=_pid - In the implementation block
-(void)setPid:(int)arg1 ;
-(void)setUid:(SCD_Struct_AX1)arg1 ;
-(int)pid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AX1)uid;
@end

