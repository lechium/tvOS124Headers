/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface VUIDebugMetricsEventListViewController : UITableViewController {

	NSArray* _events;

}

@property (nonatomic,retain) NSArray * events;              //@synthesize events=_events - In the implementation block
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(void)finishValidation;
-(void)toggleValidationMode;
@end

