/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves, NSSecureCoding> {

	int _status;
	int _role;
	int _localId;
	NSString* _name;
	NSString* _email;
	NSDate* _proposedStartTime;
	NSDate* _proposedEndTime;
	NSString* _invitedBy;
	NSMutableDictionary* _placeHolder;

}

@property (nonatomic,retain) NSMutableDictionary * placeHolder;              //@synthesize placeHolder=_placeHolder - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int role;                                       //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartTime;                     //@synthesize proposedStartTime=_proposedStartTime - In the implementation block
@property (nonatomic,retain) NSDate * proposedEndTime;                       //@synthesize proposedEndTime=_proposedEndTime - In the implementation block
@property (assign,nonatomic) int localId;                                    //@synthesize localId=_localId - In the implementation block
@property (nonatomic,retain) NSString * invitedBy;                           //@synthesize invitedBy=_invitedBy - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(BOOL)supportsSecureCoding;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(NSDate *)proposedStartTime;
-(void)setProposedStartTime:(NSDate *)arg1 ;
-(NSDate *)proposedEndTime;
-(void)setProposedEndTime:(NSDate *)arg1 ;
-(void)setLocalId:(int)arg1 ;
-(void)setPlaceHolder:(NSMutableDictionary *)arg1 ;
-(int)localId;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 isDefaultCalendar:(BOOL)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 ;
-(id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
-(id)fullEmailString;
-(id)copyOfSelfWithoutLocalID;
-(id)icsUserAddress;
-(void)setInvitedBy:(NSString *)arg1 ;
-(NSString *)invitedBy;
-(void)setRole:(int)arg1 ;
-(int)role;
-(NSMutableDictionary *)placeHolder;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end
