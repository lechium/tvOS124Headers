/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic,retain) NSString * caseID; 
@property (nonatomic,retain) NSString * caseGroupID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSDate * caseClosedTime; 
@property (nonatomic,retain) NSString * caseDomain; 
@property (nonatomic,retain) NSString * caseType; 
@property (nonatomic,retain) NSString * caseSubtype; 
@property (nonatomic,retain) NSString * caseSubtypeContext; 
@property (nonatomic,retain) NSString * caseDetectedProcess; 
@property (nonatomic,retain) NSString * caseEffectiveProcess; 
@property (nonatomic,retain) NSString * caseRelatedProcesses; 
@property (nonatomic,retain) NSString * caseThresholdValues; 
@property (assign,nonatomic) short caseState; 
@property (assign,nonatomic) short caseClosureType; 
@property (assign,nonatomic) short caseDampeningType; 
@property (nonatomic,retain) NSString * caseEvents; 
@property (nonatomic,retain) NSString * casePayloads; 
@property (nonatomic,retain) NSString * caseAttachments; 
@property (nonatomic,retain) NSString * caseContext; 
@property (nonatomic,retain) NSString * caseObjectVersion; 
@property (assign,nonatomic) BOOL remoteTrigger; 
@property (assign,nonatomic) BOOL attachmentsIncomplete; 
@end

