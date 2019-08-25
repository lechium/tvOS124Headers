/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactKeyVector, CNMutableContact, NSMutableData;

@interface CNContactBufferDecoder : NSObject {

	BOOL _mutableResults;
	CNContactKeyVector* _keyDescriptorToMakeAvailable;
	long long _state;
	CNMutableContact* _pendingContact;
	NSMutableData* _resumeBuffer;
	long long _bytesNeededToResume;

}

@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CNMutableContact * pendingContact;                            //@synthesize pendingContact=_pendingContact - In the implementation block
@property (nonatomic,retain) NSMutableData * resumeBuffer;                                 //@synthesize resumeBuffer=_resumeBuffer - In the implementation block
@property (assign,nonatomic) long long bytesNeededToResume;                                //@synthesize bytesNeededToResume=_bytesNeededToResume - In the implementation block
@property (assign,nonatomic) BOOL mutableResults;                                          //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,copy) CNContactKeyVector * keyDescriptorToMakeAvailable;              //@synthesize keyDescriptorToMakeAvailable=_keyDescriptorToMakeAvailable - In the implementation block
@property (readonly) BOOL hasPendingContacts; 
-(id)contactsFromBuffer:(id)arg1 ;
-(CNMutableContact *)pendingContact;
-(long long)bytesNeededToResume;
-(id)completedPendingContactFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(id)_contactFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(CNContactKeyVector *)keyDescriptorToMakeAvailable;
-(NSMutableData *)resumeBuffer;
-(void)setBytesNeededToResume:(long long)arg1 ;
-(void)_applyPropertiesFromFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(void)setPendingContact:(CNMutableContact *)arg1 ;
-(void)_applyMultivalueFromByteCursor:(char**)arg1 end:(char*)arg2 abPropertyID:(int)arg3 ;
-(void)_applyImageDataFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(BOOL)arg2 ;
-(BOOL)hasPendingContacts;
-(void)setKeyDescriptorToMakeAvailable:(CNContactKeyVector *)arg1 ;
-(void)setResumeBuffer:(NSMutableData *)arg1 ;
-(BOOL)mutableResults;
-(void)setMutableResults:(BOOL)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

