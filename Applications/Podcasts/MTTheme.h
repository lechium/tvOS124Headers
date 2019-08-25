//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, UIColor;

@interface MTTheme : NSManagedObject
{
}

+ (id)insertNewTheme:(id)arg1 forUuid:(id)arg2 inMOC:(id)arg3;	// IMP=0x000000010003758c
+ (_Bool)createOrUpdateTheme:(id)arg1 forUuid:(id)arg2 inMOC:(id)arg3;	// IMP=0x000000010003746c
- (void)populateWithColorTheme:(id)arg1;	// IMP=0x000000010003773c
- (id)convertToColorTheme;	// IMP=0x0000000100037630

// Remaining properties
@property(retain, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool isBackgroundLight; // @dynamic isBackgroundLight;
@property(retain, nonatomic) UIColor *primaryTextColor; // @dynamic primaryTextColor;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @dynamic secondaryTextColor;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

