/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDebugReportFormatter.h>

@class NSString;

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter {

	NSString* _header;
	NSString* _footer;
	NSString* _noIssuesDescription;
	NSString* _defaultIssuePrefix;

}

@property (nonatomic,copy) NSString * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * footer;                           //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * noIssuesDescription;              //@synthesize noIssuesDescription=_noIssuesDescription - In the implementation block
@property (nonatomic,copy) NSString * defaultIssuePrefix;               //@synthesize defaultIssuePrefix=_defaultIssuePrefix - In the implementation block
-(id)init;
-(void)setHeader:(NSString *)arg1 ;
-(void)setNoIssuesDescription:(NSString *)arg1 ;
-(id)stringFromReport:(id)arg1 ;
-(NSString *)noIssuesDescription;
-(NSString *)defaultIssuePrefix;
-(NSString *)header;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)_componentsFromReport:(id)arg1 ;
-(void)setDefaultIssuePrefix:(NSString *)arg1 ;
@end

