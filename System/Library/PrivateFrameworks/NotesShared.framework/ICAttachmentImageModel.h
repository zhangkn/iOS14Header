/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)updateFileBasedAttributes;
-(BOOL)supportsImageClassification;
-(BOOL)needsFullSizePreview;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 ;
-(BOOL)canMarkup;
-(void)updateAttachmentSize;
-(BOOL)shouldCropImage;
-(void)addLocation;
-(BOOL)supportsQuickLook;
-(id)saveURL;
-(BOOL)canSaveURL;
-(BOOL)supportsOCR;
-(CGSize)sizeByCroppingSize:(CGSize)arg1 ;
-(BOOL)hasThumbnailImage;
-(long long)previewImageOrientation;
-(id)previewImageTypeUTI;
-(BOOL)hasPreviews;
-(CGAffineTransform)previewImageOrientationTransform;
-(BOOL)showThumbnailInNoteList;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(id)previewItemTitle;
@end

