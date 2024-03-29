/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PSIQueryToken.h>

@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {

	NSDictionary* _locationNameByCategory;

}
+(BOOL)supportsSecureCoding;
-(id)parentToken;
-(id)initWithText:(id)arg1 locationNameByCategory:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

