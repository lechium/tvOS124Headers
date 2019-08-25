/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASSearchTask.h>

@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask {

	NSString* _searchId;

}
-(void)performTask;
-(void)finishWithError:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)requiresEASVersionInformaton;
-(void)_appendSearchQuery:(id)arg1 ;
-(void)_appendSearchOptions:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
@end
