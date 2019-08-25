/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {

	MDLMaterialProperty* _input;
	MDLMaterialProperty* _output;
	NSString* _name;

}

@property (nonatomic,__weak,readonly) MDLMaterialProperty * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,__weak,readonly) MDLMaterialProperty * input;               //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(id)initWithOutput:(id)arg1 input:(id)arg2 ;
-(MDLMaterialProperty *)output;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(MDLMaterialProperty *)input;
@end

