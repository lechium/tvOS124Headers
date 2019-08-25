/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {

	id _accessControlEntryInternal;

}

@property (nonatomic,copy) NSString * bundleID; 
@property (assign,getter=isOwner,nonatomic) BOOL owner; 
@property (assign,nonatomic) BOOL canRead; 
@property (assign,nonatomic) BOOL canWrite; 
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)canRead;
-(BOOL)canWrite;
-(void)setCanWrite:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 owner:(BOOL)arg2 canRead:(BOOL)arg3 canWrite:(BOOL)arg4 ;
-(void)setCanRead:(BOOL)arg1 ;
-(BOOL)isOwner;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setOwner:(BOOL)arg1 ;
@end

