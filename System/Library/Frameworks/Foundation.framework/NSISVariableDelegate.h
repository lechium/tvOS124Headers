/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISVariableDelegate <NSObject>
@optional
-(int)nsis_orientationHintForVariable:(id)arg1;

@required
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
-(id)nsis_descriptionOfVariable:(id)arg1;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;

@end

