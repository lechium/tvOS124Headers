/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation {

	/*^block*/id _modifyRecordsCompletionBlock;
	long long _savePolicy;

}

@property (nonatomic,copy) id modifyRecordsCompletionBlock;              //@synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long savePolicy;                       //@synthesize savePolicy=_savePolicy - In the implementation block
+(Class)__class;
+(id)alloc;
-(id)modifyRecordsCompletionBlock;
-(long long)savePolicy;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
@end
