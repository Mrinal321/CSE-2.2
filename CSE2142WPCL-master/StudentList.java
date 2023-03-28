import java.io.*;
import java.text.*;
import java.util.*;

public class StudentList {
	public static void main(String[] args) {
//		Check arguments
		if(args[0].equals(Constant.ShowAll)) {
			System.out.println(Constant.LoadingMessage);
			try {
				String[] studentNames = getString().split(Constant.StrudentEntryDelimiter);
			for(String student : studentNames) {
				System.out.println(student);
			}
			} catch (Exception e){

			}
			System.out.println(Constant.DataLoadedMessage);
		}
		else if(args[0].equals(Constant.ShowRandom))
		{
			System.out.println(Constant.LoadingMessage);
			try {
			String[] studentNames = getString().split(Constant.StrudentEntryDelimiter);
			int y = Math.abs(new Random().nextInt()%(studentNames.length));
			System.out.println(studentNames[y]);
			} catch (Exception e){
			
			} 
			System.out.println(Constant.DataLoadedMessage);
		}
		else if(args[0].contains(Constant.AddEntry)){
			System.out.println(Constant.LoadingMessage);
			try {
			BufferedWriter bufferedWriter = new BufferedWriter(
				new FileWriter(Constant.StudentList, true));
	        	DateFormat dateFormat = new SimpleDateFormat(Constant.DateFormate);
	        	String dateUpdate = dateFormat.format(new Date());
			bufferedWriter.write(Constant.StrudentEntryDelimiter + args[0].substring(1) + Constant.LastUpdateMessage + dateUpdate);

			bufferedWriter.close();
			} catch (Exception e){
			
			}							
			System.out.println(Constant.DataLoadedMessage);
		}
		else if(args[0].contains(Constant.FindEntry))
		{
			System.out.println(Constant.LoadingMessage);
			try {
				String[] studentNames = getString().split(Constant.StrudentEntryDelimiter);
			String studentName = args[0].substring(1);

			for (String name : studentNames) {
				if (name.trim().equals(studentName)) {
					System.out.println(Constant.DataFoundMessage);
					break;
				}
			}
			} catch (Exception e){
			
			} 
			System.out.println(Constant.DataLoadedMessage);
		}
		else if(args[0].contains(Constant.ShowCount))
		{
			System.out.println(Constant.LoadingMessage);
			try {
				char[] studentNamesToCharArray = getString().toCharArray();
			int count=1;
			for(char studentNameChar:studentNamesToCharArray) {
				if(studentNameChar ==' ')
				{
					count++;
				}
			}
			System.out.println(count/2 + Constant.WordsFoundMessage );
			} catch (Exception e){
			
			} 
			System.out.println(Constant.DataLoadedMessage);
		}
		else{
			System.out.println(Constant.WrongInputMessage);
		}
	}

	private static String getString() throws IOException {
		BufferedReader bufferedReader = new BufferedReader(
			new InputStreamReader(
				new FileInputStream(Constant.StudentList)));
		return bufferedReader.readLine();
	}
}
