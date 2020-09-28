/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MDLAssetLoader : NSObject <NSSecureCoding> {

	NSString* _extension;
	AssetData* _buffer;

}
+(BOOL)supportsSecureCoding;
-(id)initWithExtension:(id)arg1 ;
-(id)loadURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadMDLAsset:(id)arg1 preserveTopology:(BOOL)arg2 ;
@end
