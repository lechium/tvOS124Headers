/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext;

@interface CIVNFaceDetector : CIDetector {

	CIContext* context;

}

@property (retain,readonly) CIContext * context; 
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(CIContext *)context;
@end

