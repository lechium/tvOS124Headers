/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDFetchRecordPCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
@end
