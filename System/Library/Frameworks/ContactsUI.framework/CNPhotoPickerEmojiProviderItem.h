/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerProviderItem.h>
#import <libobjc.A.dylib/CNVisualIdentityPickerTextEditableProviderItem.h>

@class NSString, UIColor, NSData, CNPhotoPickerColorVariant;

@interface CNPhotoPickerEmojiProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem> {

	NSString* _stringRepresentation;
	NSData* _dataRepresentation;
	CNPhotoPickerColorVariant* _backgroundColorVariant;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * stringRepresentation;                                 //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,retain) NSData * dataRepresentation;                                     //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * backgroundColorVariant;              //@synthesize backgroundColorVariant=_backgroundColorVariant - In the implementation block
@property (nonatomic,readonly) NSString * itemText; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
+(id)addNewEmojiProviderItemWithSize:(CGSize)arg1 ;
+(id)suggestedEmojiItemsForString:(id)arg1 variantsManager:(id)arg2 size:(CGSize)arg3 locale:(id)arg4 ;
+(id)thumbnailViewForImage:(id)arg1 ;
-(id)imageData;
-(NSData *)dataRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemText;
-(void)setSize:(CGSize)arg1 ;
-(id)copyWithStringRepresentation:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 backgroundColorVariant:(id)arg2 size:(CGSize)arg3 ;
-(void)setDataRepresentation:(NSData *)arg1 ;
-(id)generateImageRepresentationForEmojiString:(id)arg1 ;
-(void)setBackgroundColorVariant:(CNPhotoPickerColorVariant *)arg1 ;
-(id)updatedProviderItemWithText:(id)arg1 backgroundColorVariant:(id)arg2 ;
-(CNPhotoPickerColorVariant *)backgroundColorVariant;
-(UIColor *)backgroundColor;
-(id)updatedProviderItemWithText:(id)arg1 ;
-(CGSize)size;
-(BOOL)allowsVariants;
-(NSString *)stringRepresentation;
-(id)thumbnailImageData;
-(BOOL)allowsMoveAndScale;
-(id)generateThumbnailImageDataIfNeeded;
-(void)updateVisualIdentity:(id)arg1 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(unsigned long long)imageType;
@end

