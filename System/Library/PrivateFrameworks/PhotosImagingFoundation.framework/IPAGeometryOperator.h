/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPAGeometryOperator.h>

@protocol IPAGeometryOperator <NSObject>
@required
-(id)transformForGeometry:(id)arg1;
-(id)identifier;

@end


@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {

	NSString* _identifer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transformForGeometry:(id)arg1 ;
-(id)init;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

