/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDsToShare;
	NSArray* _recordIDsToUnshare;
	NSArray* _recordIDsToShareReadWrite;

}

@property (nonatomic,retain) NSArray * recordIDsToShare;                       //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                     //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToShareReadWrite;              //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recordIDsToShare;
-(NSArray *)recordIDsToUnshare;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

