/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(CLLocationCoordinate2D)coordinate;

@end

