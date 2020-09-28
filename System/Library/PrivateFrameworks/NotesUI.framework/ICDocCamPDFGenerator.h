/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICDocCamPDFGenerator : NSObject
+(id)fileManager;
+(id)fileQueue;
+(id)rootPDFFolderPath;
+(id)rootPDFFolderPathForPWAttachments;
+(id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(BOOL)arg2 ;
+(id)folderPathForAttachment:(id)arg1 ;
+(id)versionFolderPathForAttachment:(id)arg1 ;
+(id)versionPDFPathForAttachment:(id)arg1 ;
+(void)deletePDFFolderIfExistsForAttachment:(id)arg1 ;
+(id)pdfURLForAttachment:(id)arg1 ;
+(id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id*)arg3 ;
+(id)syncGeneratorQueue;
+(void)deletePDFForAttachmentIfExists:(id)arg1 ;
+(void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1 ;
+(void)deleteAllDocCamPDFs;
+(void)deleteAllDocCamPasswordProtectedPDFs;
+(void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(id)arg2 presentingViewController:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id*)arg4 ;
@end
