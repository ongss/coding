package physic;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;

public class Main extends Application{
	Canvas canvas = new Canvas();
	GraphicsContext gc = canvas.getGraphicsContext2D();
	@Override
	public void start(Stage primaryStage) {
		try {
			canvas.setWidth(500);
			canvas.setHeight(500);
			Scene scene = new Scene(new Pane(canvas));
			canvas.requestFocus();
			primaryStage.setTitle("hello physic");
			primaryStage.setScene(scene);
			primaryStage.centerOnScreen();
			primaryStage.setResizable(false);
			primaryStage.sizeToScene();
			primaryStage.show();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		launch(args);
	}
}
