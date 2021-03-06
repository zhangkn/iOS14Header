/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject {

	BOOL _wasSelectedInFullPhotoPicker;
	UIImage* _originalImage;
	UIImage* _compositedImage;
	NSString* _variantName;
	long long _avatarType;

}

@property (nonatomic,retain) UIImage * originalImage;                        //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * compositedImage;                      //@synthesize compositedImage=_compositedImage - In the implementation block
@property (nonatomic,copy) NSString * variantName;                           //@synthesize variantName=_variantName - In the implementation block
@property (assign,nonatomic) long long avatarType;                           //@synthesize avatarType=_avatarType - In the implementation block
@property (assign,nonatomic) BOOL wasSelectedInFullPhotoPicker;              //@synthesize wasSelectedInFullPhotoPicker=_wasSelectedInFullPhotoPicker - In the implementation block
-(UIImage *)originalImage;
-(NSString *)variantName;
-(void)setVariantName:(NSString *)arg1 ;
-(long long)avatarType;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(void)setAvatarType:(long long)arg1 ;
-(UIImage *)compositedImage;
-(void)setCompositedImage:(UIImage *)arg1 ;
-(BOOL)wasSelectedInFullPhotoPicker;
-(void)setWasSelectedInFullPhotoPicker:(BOOL)arg1 ;
@end

