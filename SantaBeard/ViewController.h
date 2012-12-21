//
//  ViewController.h
//  SantaBeard
//
//  Created by Patrick Serrano on 12/19/12.
//  Copyright (c) 2012 Patrick Serrano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIGestureRecognizerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *photoView;
@property (strong, nonatomic) IBOutlet UIImageView *beardView;

- (IBAction)cameraBtnAction:(id)sender;
- (IBAction)shareBtnAction:(id)sender;
@end
