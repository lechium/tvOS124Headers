/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKTableViewController.h>

@class NSArray;

@interface MKTransitIncidentsViewController : _MKTableViewController {

	NSArray* _incidents;

}

@property (nonatomic,copy) NSArray * incidents;              //@synthesize incidents=_incidents - In the implementation block
-(NSArray *)incidents;
-(void)setIncidents:(NSArray *)arg1 ;
-(void)infoCardThemeChanged:(id)arg1 ;
-(id)initWithIncidents:(id)arg1 ;
-(void)_localeDidChange;
-(id)_cellForRow:(long long)arg1 inSection:(long long)arg2 ;
-(void)_updateTitle;
-(void)dealloc;
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

