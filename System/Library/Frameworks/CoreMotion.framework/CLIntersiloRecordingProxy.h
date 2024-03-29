/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLIntersiloProxy.h>

@class NSString, NSSet;

@interface CLIntersiloRecordingProxy : CLIntersiloProxy {

	long long _specialRole;
	NSString* _delegateName;
	shared_ptr<CMMsl::Writer>* _recordingWriter;
	NSSet* _triggeringDelegateNames;

}

@property (nonatomic,retain) NSSet * triggeringDelegateNames;              //@synthesize triggeringDelegateNames=_triggeringDelegateNames - In the implementation block
@property (nonatomic,copy,readonly) NSString * delegateName;               //@synthesize delegateName=_delegateName - In the implementation block
+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 inboundTriggerNames:(id)arg4 outboundTriggerNames:(id)arg5 recordingWriter:(shared_ptr<CMMsl::Writer>*)arg6 ;
-(void)setProxyPairRecordingInboundTriggerNames:(id)arg1 outboundTriggerNames:(id)arg2 ;
-(void)setProxyPairRecordingWriter:(shared_ptr<CMMsl::Writer>*)arg1 ;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(NSString *)delegateName;
-(void)setTriggeringDelegateNames:(NSSet *)arg1 ;
-(void)setRecordingWriter:(shared_ptr<CMMsl::Writer>*)arg1 ;
-(NSSet *)triggeringDelegateNames;
-(void)dispatchEncodedInvocation:(id)arg1 expectedClasses:(id)arg2 ;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
-(void)dealloc;
@end

