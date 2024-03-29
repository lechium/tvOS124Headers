/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation {

	NSArray* _userIdentities;
	/*^block*/id _lookupParticipantsCompletionBlock;

}

@property (copy) id lookupParticipantsCompletionBlock;              //@synthesize lookupParticipantsCompletionBlock=_lookupParticipantsCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)lookupParticipantsCompletionBlock;
-(void)setLookupParticipantsCompletionBlock:(id)arg1 ;
-(id)initWithUserIdentities:(id)arg1 ;
-(void)main;
@end

