/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> >* sharedBufferDataSegment;

}
+(void)initialize;
-(id)initWithSharedBufferDataSegment:(const DataSegment=atomic<unsigned int>=AI}Variant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16>, WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData>=(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16>, WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData>=(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16> >=storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16> >=type=[16C]}}dummy_type)(__variant_data<WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData>=(__variant_data<WTF::RetainPtr<const __CFData *> >=storage_wrapper<WTF::RetainPtr<const __CFData *> >=type=[8C]}}dummy_type)(__variant_data<WebCore::FileSystem::MappedFileData>=storage_wrapper<WebCore::FileSystem::MappedFileData>=type=[16C]}}dummy_type)))c}}Ref)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
-(const void*)bytes;
@end

