/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKQueryOperation : IDSCKDatabaseOperation {

	/*^block*/id _recordFetchedBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id recordFetchedBlock;              //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
+(Class)__class;
+(id)alloc;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)recordFetchedBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end

