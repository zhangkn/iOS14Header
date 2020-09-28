/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding> {

	NSURL* _resourceDirectoryURL;
	NSString* _bundleIdentifier;
	NSDictionary* _iconsDictionary;
	NSString* _preferedResourceName;

}

@property (retain) NSURL * resourceDirectoryURL;               //@synthesize resourceDirectoryURL=_resourceDirectoryURL - In the implementation block
@property (copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSDictionary * iconsDictionary;               //@synthesize iconsDictionary=_iconsDictionary - In the implementation block
@property (copy) NSString * preferedResourceName;              //@synthesize preferedResourceName=_preferedResourceName - In the implementation block
@property (readonly) BOOL allowLocalizedIcon; 
+(id)resourceLocatorWithLSIconResourceLocator:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)genericIconrResourceLocator;
+(id)resourceLocatorWithType:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setPreferedResourceName:(NSString *)arg1 ;
-(BOOL)allowLocalizedIcon;
-(NSURL *)resourceDirectoryURL;
-(void)setResourceDirectoryURL:(NSURL *)arg1 ;
-(NSDictionary *)iconsDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)preferedResourceName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setIconsDictionary:(NSDictionary *)arg1 ;
@end
