/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactBufferDecoder, NSMutableArray, CNContactFetchRequest;

@interface CNiOSABContactBuffersDecoder : NSObject {

	CNContactBufferDecoder* _decoder;
	NSMutableArray* _contactsWaitingForUnification;
	CNContactFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) CNContactBufferDecoder * decoder;                            //@synthesize decoder=_decoder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contactsWaitingForUnification;              //@synthesize contactsWaitingForUnification=_contactsWaitingForUnification - In the implementation block
@property (nonatomic,readonly) CNContactFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(CNContactBufferDecoder *)decoder;
-(id)unifyContacts:(id)arg1 moreComing:(BOOL)arg2 ;
-(NSMutableArray *)contactsWaitingForUnification;
-(id)contactsFromData:(id)arg1 moreComing:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(CNContactFetchRequest *)fetchRequest;
-(id)init;
@end

