/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ACComponentWrapper : NSObject <NSSecureCoding> {

	shared_ptr<APComponent>* mComponent;

}
+(BOOL)supportsSecureCoding;
-(id)initWithComponent:(shared_ptr<APComponent>*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

