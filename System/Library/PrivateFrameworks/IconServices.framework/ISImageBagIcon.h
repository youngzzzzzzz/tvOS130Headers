/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, ISImageCache;

@interface ISImageBagIcon : ISIcon {

	NSArray* _images;
	NSArray* _decorations;
	ISImageCache* _imageCache;

}

@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) NSArray * images;                     //@synthesize images=_images - In the implementation block
-(NSArray *)images;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(id)initWithImages:(id)arg1 decorations:(id)arg2 ;
-(id)decorations;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
