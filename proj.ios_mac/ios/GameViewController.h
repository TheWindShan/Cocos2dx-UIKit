//
//  GameViewController.h
//  LasAlitas
//
//  Created by Raul on 9/11/15.
//
//

#import <UIKit/UIKit.h>

@interface GameViewController : UIViewController
-(void)showCoupon;
-(void)hideCoupon;
-(void)closeGameScene;
@property (strong,nonatomic) NSString* presentationStyle;

@end
