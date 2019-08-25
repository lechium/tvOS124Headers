/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _shareMetadatasToAccept;

}

@property (nonatomic,retain) NSArray * shareMetadatasToAccept;              //@synthesize shareMetadatasToAccept=_shareMetadatasToAccept - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)databaseScope;
-(NSArray *)shareMetadatasToAccept;
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

