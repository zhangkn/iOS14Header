/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject {

	NSString* _archivePath;
	NSArray* _extractedContentAbsolutePaths;

}

@property (nonatomic,readonly) NSString * archivePath;                               //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) NSArray * extractedContentAbsolutePaths;              //@synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths - In the implementation block
+(BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2 ;
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1 ;
-(id)initForExtractingArchivePath:(id)arg1 ;
-(BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3 ;
-(NSArray *)extractedContentAbsolutePaths;
-(NSString *)archivePath;
@end

