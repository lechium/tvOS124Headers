/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDebugIssueReporting.h>

@class NSString, _UIDebugIssueReport, NSArray;

@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting> {

	NSString* _description;
	NSString* _prefix;
	_UIDebugIssueReport* _subissueReport;

}

@property (getter=_subissueReport,nonatomic,readonly) _UIDebugIssueReport * subissueReport;              //@synthesize subissueReport=_subissueReport - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * description;                                                       //@synthesize description=_description - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subissues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)issueWithDescription:(id)arg1 ;
+(id)issueWithFormat:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)addIssue:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSArray *)subissues;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(id)_subissueReport;
@end

