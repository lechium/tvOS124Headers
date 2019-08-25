/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	CNContact* _contact;
	CNContactStore* _store;

}
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)_removeContextProviderOnMainThread;
-(id)contextManager;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
@end
