/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID, NSString, NSDate, NSURL, NSNumber;


@protocol PLPTPTransferableSidecarFile <NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) NSString * filename; 
@property (nonatomic,retain,readonly) NSDate * captureDate; 
@property (nonatomic,retain,readonly) NSDate * modificationDate; 
@property (nonatomic,retain,readonly) NSURL * fileURL; 
@property (nonatomic,retain,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@required
-(NSString *)filename;
-(NSNumber *)compressedSize;
-(long long)ptpTrashedState;
-(NSDate *)captureDate;
-(NSManagedObjectID *)objectID;
-(NSURL *)fileURL;
-(NSDate *)modificationDate;

@end

