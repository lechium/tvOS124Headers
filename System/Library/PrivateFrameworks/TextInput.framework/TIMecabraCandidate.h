/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	BOOL _emojiCandidate;
	BOOL _extensionCandidate;
	BOOL _isForShortcutConversion;
	BOOL _isAutocorrection;
	BOOL _OTAWordListCandidate;
	BOOL _regionalCandidate;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned long long _deleteCount;
	long long _cursorMovement;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;              //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(NSNumber *)mecabraCandidatePointerValue;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isAutocorrection;
-(unsigned long long)deleteCount;
-(id)candidate;
-(BOOL)isForShortcutConversion;
-(long long)cursorMovement;
-(id)input;
-(BOOL)isExtensionCandidate;
-(BOOL)isEmojiCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
@end

