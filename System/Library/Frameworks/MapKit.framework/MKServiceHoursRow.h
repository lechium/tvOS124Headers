/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceCompleteHoursView, GEOLinkedService;

@interface MKServiceHoursRow : MKPlaceSectionRowView {

	MKPlaceCompleteHoursView* _completePlaceHoursView;
	GEOLinkedService* _linkedService;

}

@property (nonatomic,retain) MKPlaceCompleteHoursView * completePlaceHoursView;              //@synthesize completePlaceHoursView=_completePlaceHoursView - In the implementation block
@property (nonatomic,retain) GEOLinkedService * linkedService;                               //@synthesize linkedService=_linkedService - In the implementation block
-(GEOLinkedService *)linkedService;
-(void)setLinkedService:(GEOLinkedService *)arg1 ;
-(id)initWithLinkedService:(id)arg1 frame:(CGRect)arg2 showTodaysHoursOnly:(BOOL)arg3 ;
-(MKPlaceCompleteHoursView *)completePlaceHoursView;
-(void)setCompletePlaceHoursView:(MKPlaceCompleteHoursView *)arg1 ;
-(void)_setUpConstraints;
@end
